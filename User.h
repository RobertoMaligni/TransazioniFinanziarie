//
// Created by samuele on 18/07/24.
//

#ifndef TRANSAZIONIFINANZIARIE_USER_H
#define TRANSAZIONIFINANZIARIE_USER_H


#include <string>
#include <utility>
#include <vector>
#include "Account.h"

class User {
private:
    std::string id;
    std::vector<Account> accounts;
public:
    explicit User(std::string id) : id(std::move(id)){};




};


#endif //TRANSAZIONIFINANZIARIE_USER_H
