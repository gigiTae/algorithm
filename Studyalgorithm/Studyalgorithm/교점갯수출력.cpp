//
//#include <iostream>
//#include <vector>
//
//#define infinite -987654321
//
//class Point {
//public:
//    int x, y;
//
//public:
//    Point(int pos_x, int pos_y)
//        :x(pos_x)
//        , y(pos_y)
//    {}
//};
//
//class Geometry {
//public:
//    Geometry() {
//        for (int i = 0; i < 100; ++i)
//            point_array[i] = nullptr;
//        num_points = 0;
//    }
//
//    void AddPoint(const Point& point) {
//        point_array[num_points++] = new Point(point.x, point.y);
//    }
//
//    // 모든 점들 간의 거리를 출력하는 함수 입니다.
//    void PrintDistance();
//
//    // 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주 는 함수 입니다.
//    // 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
//    // 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
//    // 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
//    void PrintNumMeets();
//
//private:
//    // 점 100 개를 보관하는 배열.
//    Point* point_array[100];
//    int num_points;
//};
//
//int main()
//{
//    Geometry geo;
//    geo.AddPoint(Point(2, 3));
//    geo.AddPoint(Point(442, 32));
//    geo.AddPoint(Point(21, 323));
//
//    geo.PrintDistance();
//    geo.PrintNumMeets();
//}
//
//void Geometry::PrintDistance()
//{
//    for (int i = 0; i < num_points; ++i)
//    {
//        for (int j = i + 1; j < num_points; ++j)
//        {
//            double distance;
//            // 피타고라스의 정리
//            // pow(x,2) x의 2승,  sqrt() 제곱근
//            distance = sqrt(pow(point_array[i]->x - point_array[j]->x, 2) + pow(point_array[i]->y - point_array[j]->y, 2));
//            std::cout << " 점" << i + 1 << " 점" << j + 1 << " 의 거리는 " << distance << '\n';
//        }
//    }
//}
//
//void Geometry::PrintNumMeets()
//{
//    if (num_points < 3)
//    {
//        std::cout << "교점이 존재하지 않는다";
//        return;
//    }
//
//    std::vector<std::pair<int, int>> vec;  // 기울기, y절편
//    for (int i = 0; i < num_points; ++i)
//    {
//        for (int j = i + 1; j < num_points; ++j)
//        {
//            Point* p1 = point_array[i];
//            Point* p2 = point_array[j];
//            int m;
//            if (p2->x != p1->x)
//                m = (p2->y - p1->y) / (p2->x - p1->x);
//            else
//                m = infinite;
//            int n = p1->y - m * p1->x;
//            // 직선의 방정식 구하고 저장
//            vec.push_back(std::make_pair(m, n));
//
//        }
//    }
//
//    int ans = 0;
//    // 직선간의 
//    for (int i = 0; i < vec.size(); ++i)
//        for (int j = i + 1; j < vec.size(); ++j)
//        {
//            if (vec[i].first != vec[j].first)
//                ++ans; // 교점 1개
//            else if (vec[i].second == vec[j].second)         // 교점이 무수히 많음
//            {
//                std::cout << "교점이 무수히 많다.";
//                return;
//            }
//        }
//    std::cout << "교점은 " << ans << '\n';
//
//}
