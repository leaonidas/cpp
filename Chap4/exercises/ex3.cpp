#include <iostream>
#include <string>
#include <vector>

void totalDistance(std::vector<double> distances){
    double sum=0;
    for(double dis : distances){
        sum += dis;
    }
    std::cout << "Total distance: " <<  sum << "\n";
}

void minMax(std::vector<double> distances){
    double max, min;
    bool first = true;

    for(double dis : distances){
        if(first){
            max = dis;
            min = dis;
            first = false;
        }else{
            if(dis >= max) max = dis;
            else if(dis <= min) min = dis;
        }
    }
    std::cout << "Max distance: " << max << "\nMin distance: " << min << "\n";
}

void mean(std::vector<double> distances){
    double mean, sum=0;
    //could've used the function above but not feeling like changing function type
    for(double dis : distances){
        sum += dis;
    }
    mean = sum/distances.size();
    std::cout << "Mean value: " << mean << "\n";
}

int main(){
    double a, b, totalDis;
    std::vector<double> distances;

    while(std::cin >> a >> b){
        distances.push_back(a);
        distances.push_back(b);
        totalDistance(distances);
        minMax(distances);
        mean(distances);
    }
    return 0;
}