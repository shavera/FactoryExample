//
// Created by Alex Shaver on 8/30/17.
//

#ifndef FACTORYEXAMPLE_GENERICFACTORY_H
#define FACTORYEXAMPLE_GENERICFACTORY_H

#include <algorithm>
#include <functional>
#include <map>
#include <type_traits>

template<typename Base, typename ClassIDKey=std::string>
class GenericFactory {
    using BaseCreateFn = std::function<Base *()>;
    using FnRegistry = std::map<ClassIDKey, BaseCreateFn>;

public:
    static GenericFactory &instance() {
        static GenericFactory factory;
        return factory;
    }

    void RegCreateFn(const ClassIDKey &key, const BaseCreateFn &createFunction) {
        auto regIt = std::find_if(registry.begin(), registry.end(),
                                  [key](const auto &registryEntry) {
                                      return key == registryEntry.first;
                                  });

        if (registry.end() == regIt) {
            registry.emplace(key, createFunction);
        } else {
            registry.at(key) = createFunction;
        }
    }

    Base *Create(const ClassIDKey &key) const {
        auto registryIt = registry.find(key);
        if (registry.cend() != registryIt) {
            return registryIt->second();
        }
        return nullptr;
    }

private:
    FnRegistry registry;
};

template<class Base,
        class Derived,
        typename ClassIDKey=std::string,
        typename = std::enable_if_t<std::is_base_of<Base, Derived>::value>
>
class RegisterInFactory {
public:
    static Base *CreateInstance() {
        return new Derived;
    }

    explicit RegisterInFactory(const ClassIDKey &id) {
        GenericFactory<Base>::instance().RegCreateFn(id, CreateInstance);
    }
};


#endif //FACTORYEXAMPLE_GENERICFACTORY_H
