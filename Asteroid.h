
//  Created by Ty Graves on 4/28/20.

#ifndef Asteroid_h
#define Asteroid_h

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Asteroid{
public:
    
    Asteroid();
    virtual ~Asteroid();
    
    
    void setName(string stemp){ name = stemp;}
    void setX(int val){ X = val;}
    void setY(int val){ Y = val;}
    void setZ(int val){ Z = val;}
    void setMass(int temp){mass = temp;}
    
    string getName(){return name;}
    int getX(){return X;}
    int getY(){return Y;}
    int getZ(){return Z;}
    int getMass(){return mass;}
    
    void showLocation(){
        cout << this->name << " : " << "(" << X << "," << Y << "," << Z << ") ";
        cout << "Mass: " << this->mass << " kg" << endl;
    }
    
    
    
    void setDist(const Asteroid& other){
        cout << endl;
        
        
        // subtraction
        int dx = this->X - other.X;
        int dy = this->Y - other.Y;
        int dz = this->Z - other.Z;
        
        int sqX = pow(dx,2);
        int sqY = pow(dy,2);
        int sqZ = pow(dz,2);
        
        
        int XYZ = sqX + sqY + sqZ;
        
        double D2 = sqrt(XYZ);
        
        
        cout << "Distance between each asteroid D: " << D2 << "(m)"<< endl;
        cout << endl;
        dist = D2;
        
    }
    float getDist(){return dist;}
    
    void Newton(const Asteroid& other){
        cout << endl;
        
        double multMass = this->mass * other.mass;
        //cout << "MultMass : " << multMass << endl;
        
        double top = multMass * g;
        //cout << "Top : " << top << endl;
        
        double sqD = pow(dist,2);
        double denom = sqD;
       // cout << "Denominator: " << denom << endl;
        
       double F = top / denom ;
        cout << "Attraction -> F = " << F << " N" << endl;
        cout << endl;
    }
    
    
    
private:
    string name;
    int X;
    int Y;
    int Z;
    double g = 6.67*pow(10,-11);
    double dist;
    
    int mass;
};


#include "Asteroid.cpp"















#endif /* Asteroid_h */
