//
//  Asteroid.cpp
//  
//
//  Created by Ty Graves on 4/28/20.
//

#include "Asteroid.h"
Asteroid::Asteroid(){
    X = 0; Y = 0; Z = 0;
}

Asteroid::~Asteroid(){
    cout << "Boom Boom "<< this->name << " Destroid" <<endl;
}
