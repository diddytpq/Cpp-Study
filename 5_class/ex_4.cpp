#include <iostream>
#include <cmath>

// 수학 관련 소프트웨어를 만드는 회사에서 의뢰가 들어왔습니다. 
// 중학생용 기하학 소프트웨워를 만드는 것인데요, 
// 클래스는 총 두 개로 하나는 Point 로 점에 관한 정보를 담는 것이고 다른 하나는 Geometry 로 점들을 가지고 연산을 하는 클래스 입니다.
// 즉 아래와 같은 두 클래스의 함수들을 모두 정의하세요 (난이도 : 上)

class Point {

 public:
  int x, y;

  Point(int pos_x, int pos_y)
  {
    x = pos_x;
    y = pos_y;
  }

  int get_x(){return x;}
  int get_y(){return y;}

};



class Geometry {
 public:
  Geometry() {
    num_points = 0;
  }

  void AddPoint(Point &point) {
    point_array[num_points ++] = new Point(point.get_x(), point.get_y());
  }

  // 모든 점들 간의 거리를 출력하는 함수 입니다.
  void PrintDistance()
  {
    for(int i =0; i<=num_points - 1; i++)
    {
      int point_x = point_array[i]->get_x();
      int point_y = point_array[i]->get_y();

      for(int j=i+1; j <= num_points - i; j++)
      {
        std::cout << i << "번째와 " << j << "번째 거리" << std::endl;
        std::cout << sqrt(pow(point_x - point_array[j]->get_x(),2) + pow(point_y - point_array[j]->get_y(),2)) << std::endl;
      }

    }

  }

  // 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수 입니다.
  // 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
  // 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
  // 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
  void PrintNumMeets()
  {

  }

private:
  // 점 100 개를 보관하는 배열.
  Point* point_array[100];
  int num_points;
};



int main()
{
  Point point_1(1,2), point_2(3,3);
  Geometry geometry;
  geometry.AddPoint(point_1);
  geometry.AddPoint(point_2);

  geometry.PrintDistance();
}