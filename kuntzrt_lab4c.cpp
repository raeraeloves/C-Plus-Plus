//
//  main.cpp
//  kuntzrt_lab4c
//
//  Created by Rachel Kuntz on 2/3/20.
//  Copyright © 2020 Rachel Kuntz. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // define variables
    double velocity;
    double walkSpeed; // feet per second
    double verDist = 0.0;
    double walkDistance;
    double height;
    double time1; // time in seconds (friend to striking point)
    double time2 = 0.0; // time in seconds (balloon to friend)
    double waitTime;
    
    // get values
    cout << "This is a program that will tell you when to drop a water balloon"
         << " from a building in order to drench your friend." << endl;
    cout << "How far away is your friend? (ft) " << endl;
    cin >> walkDistance;
    
    cout << "How fast are they walking? (ft/sec) " << endl;
    cin >> walkSpeed;
    
    cout << "How high up are you? (ft)" << endl;
    cin >> height;

    // calculate time1
    time1 = walkDistance / walkSpeed;

    // calculate velocity
    velocity = 0.0;
    
    // drop balloon #FIXME time is truncating
    while (verDist < height) {
        time2 += 1000.0;
        verDist += velocity * 1000.0;
        velocity += 0.032 - (0.0012 * velocity);
      }
    
    //convert time2 to seconds
    time2 /= 1000.0;
    
    // calculate wait time
    waitTime = time1 - time2;
    
    // output results
    cout << fixed << setprecision(2);
    cout << "It will take " << time1
         << " seconds for your friend to reach the striking point" << endl;
    cout << "It will take " << time2
         << " seconds for your balloon to hit the ground." << endl;
    if (waitTime > 0) {
        cout << "if you wait " << waitTime << " seconds, you will hit them." << endl;
    } else if (waitTime < 0) {
        cout << "It is too late to drop your balloon." << endl;
    } else {
        cout << "Bam! you hit your friend with a water balloon!" << endl;
    }
    
    return 0;
}
 
