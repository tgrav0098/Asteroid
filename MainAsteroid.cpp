//
//  MainAsteroid.cpp
//  
//
//  Created by Ty Graves on 4/28/20.
//
#include <iostream>
#include <stdio.h>
#include "Asteroid.h"
using namespace std;

int main(){
    Asteroid A1, A2;
    int tempVal;
    string stemp;
    int tempMass;
    
    
    cout << "[ Graves,Ty -- Final Exam CS250 ]" << endl;
    cout<<endl;
    cout << "This Program is Testing Newtons Law of Universal Gravity by using Asteroids in Space" << endl;
    
    cout << endl;
    
  // ------- Setting Names ---------
    cout << "Set Name For Asteroid 1: ";
    
    getline(cin, stemp);
    A1.setName(stemp);
    
    cout << "Set Name For Asteroid 2: ";
    
    getline(cin, stemp);
    A2.setName(stemp);
    //------- Mass --------
    cout << endl;
    cout << "Now Set Mass for Asteroids" << endl;
    cout << "i.e) Input of 100 will be 100 kg" << endl;
    
    cout << "Set Mass for " << A1.getName() << endl;
    cout << "mass: ";
    cin >> tempMass;
    A1.setMass(tempMass);
    
    cout << "Set Mass for " << A2.getName() << endl;
    cout << "mass: ";
    cin >> tempMass;
    A2.setMass(tempMass);
    
  // --------- Asteroid 1 Coordinates ------
    cout << "Enter Each Coordinates For " << A1.getName() << " in meters (m)"<<endl;
    cout << "Enter X : ";
    cin >> tempVal;
    A1.setX(tempVal);
    
    cout << "Enter Y : ";
    cin >> tempVal;
    A1.setY(tempVal);
    
    cout << "Enter Z : ";
    cin >> tempVal;
    A1.setZ(tempVal);
    
    cout << endl;
    
    
    
  // ------------Asteroid 2 Coordinates ---------
    
    cout << "Enter Each Coordinates For " << A2.getName() << " in meters (m)"<<endl;
       cout << "Enter X : ";
       cin >> tempVal;
       A2.setX(tempVal);
       
       cout << "Enter Y : ";
       cin >> tempVal;
       A2.setY(tempVal);
       
       cout << "Enter Z : ";
       cin >> tempVal;
       A2.setZ(tempVal);
       
       cout << endl;
       
 //----------- Display Locations ---------
    
    A1.showLocation();
    A2.showLocation();


//---------------- Math ----------------
    A1.setDist(A2);
    
    A1.Newton(A2);
    
    
}
