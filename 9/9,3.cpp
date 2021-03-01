#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar(rect xypos)
{
      using namespace std;
      polar answer;
      
      answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
      answer.angle = atan2(xypos.y, xypos.x);
      return answer;
}

void show_polar(polar dapos)
{
     using namespace std;
     const double Red_to_deg = 57.29577951;
     
     cout << "odleglosc = " << dapos.distance;
     cout << ", odchylenie = " << dapos.angle * Red_to_deg;
     cout << "stopni\n";
}
     
