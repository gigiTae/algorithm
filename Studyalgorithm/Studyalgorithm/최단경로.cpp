//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//struct Info
//{
//    int edge;
//    int value;
//
//    Info(int _edge, int _value)
//        :edge(_edge)
//        , value(_value)
//    {}
//};
//
//int V, E, K;
//
//vector<Info> vec[20001];
//bool visited[20001]{};
//int ans[20001]{};
//multimap<int, int> M;
//
//void BFS()
//{
//    M.insert(make_pair(0, K));
//    while (!M.empty())
//    {
//        auto iter = M.begin();
//        int index = iter->second;
//        if (visited[index] == true)
//        {
//            M.erase(iter);
//            continue;
//        }
//        visited[index] = true;
//        for (int i = 0; i < vec[index].size(); ++i)
//        {
//            Info info = vec[index][i];
//            if (ans[info.edge] == 0 && visited[info.edge] == false)
//            {
//                ans[info.edge] = ans[iter->second] + info.value;
//                M.insert(make_pair(ans[info.edge], info.edge));
//            }
//            else if (ans[info.edge] > ans[iter->second] + info.value)
//            {
//                ans[info.edge] = ans[iter->second] + info.value;
//                M.insert(make_pair(ans[info.edge], info.edge));
//            }
//        }
//        M.erase(iter);
//    }
//
//
//}
//
//
//int main()
//{
//    cin.tie(NULL);
//    std::cout.tie(NULL);
//    ios::sync_with_stdio(false);
//    cin >> V >> E >> K;
//    for (int i = 0; i < E; ++i)
//    {
//        int u, v, w;
//        cin >> u >> v >> w;
//        vec[u].push_back(Info(v, w));
//    }
//
//    BFS();
//
//
//    for (int i = 1; i <= V; ++i)
//    {
//        if (ans[i] == 0 && i != K)
//            cout << "INF" << '\n';
//        else
//            cout << ans[i] << '\n';
//    }
//}
//
