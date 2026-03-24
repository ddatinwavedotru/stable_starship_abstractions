#ifndef IMPLEMENTATIONS_H
#define IMPLEMENTATIONS_H

#include <any>
#include <optional>
#include <map>

#include "interfaces.h"


class GameItem: public IGameItem {
public:
    std::optional<std::any> get(std::string const &key) const override {
        auto it=m_m.find(key);
        if(it==m_m.end()) {
            return std::nullopt;
        }
        return it->second;
    }

    void set(std::string const &key, std::any value) override {
        m_m[key]=std::move(value);
    }

protected:
    std::map<std::string, std::any> m_m;
};



#endif // IMPLEMENTATIONS_H
