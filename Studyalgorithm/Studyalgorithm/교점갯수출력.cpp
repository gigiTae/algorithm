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
//    // ��� ���� ���� �Ÿ��� ����ϴ� �Լ� �Դϴ�.
//    void PrintDistance();
//
//    // ��� ������ �մ� ������ ���� ������ ���� ������� �� �Լ� �Դϴ�.
//    // ���������� ������ �� ���� �մ� ������ �������� f(x,y) = ax+by+c = 0
//    // �̶�� �� �� ������ �ٸ� �� �� (x1, y1) �� (x2, y2) �� f(x,y)=0 �� ��������
//    // ���� �ٸ� �κп� ���� ������ f(x1, y1) * f(x2, y2) <= 0 �̸� �˴ϴ�.
//    void PrintNumMeets();
//
//private:
//    // �� 100 ���� �����ϴ� �迭.
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
//            // ��Ÿ����� ����
//            // pow(x,2) x�� 2��,  sqrt() ������
//            distance = sqrt(pow(point_array[i]->x - point_array[j]->x, 2) + pow(point_array[i]->y - point_array[j]->y, 2));
//            std::cout << " ��" << i + 1 << " ��" << j + 1 << " �� �Ÿ��� " << distance << '\n';
//        }
//    }
//}
//
//void Geometry::PrintNumMeets()
//{
//    if (num_points < 3)
//    {
//        std::cout << "������ �������� �ʴ´�";
//        return;
//    }
//
//    std::vector<std::pair<int, int>> vec;  // ����, y����
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
//            // ������ ������ ���ϰ� ����
//            vec.push_back(std::make_pair(m, n));
//
//        }
//    }
//
//    int ans = 0;
//    // �������� 
//    for (int i = 0; i < vec.size(); ++i)
//        for (int j = i + 1; j < vec.size(); ++j)
//        {
//            if (vec[i].first != vec[j].first)
//                ++ans; // ���� 1��
//            else if (vec[i].second == vec[j].second)         // ������ ������ ����
//            {
//                std::cout << "������ ������ ����.";
//                return;
//            }
//        }
//    std::cout << "������ " << ans << '\n';
//
//}
