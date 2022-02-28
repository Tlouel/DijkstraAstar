#pragma once

#include <iostream>
#include <map>
#include <list>
#include <algorithm>
#include <set>

using namespace std;

template <typename T>

class Graph {
	map<T, list<pair<T, int>>> I;

public:
	void Connect(T x, T y, int wt) {
		I[x].push_back({ y, wt });
		I[y].push_back({ x, wt });

	}

	void Print() {
		for (auto p : I) {
			T node = p.first;
			cout << node << "--->";

			for (auto nbr : I[node]) {
				cout << "(" << nbr.first << "," << nbr.second << ")" << endl;
			}
		}
	}

	void Dijkstra(T src) {

		map<T, int> dist;

		for (auto p : I) {
			T node = p.first;
			dist[node] = INT_MAX;
		}

		dist[src] = 0;

		set<pair<int, T>> s;
		s.insert({ dist[src], src });

		while (!s.empty()) {

			pair <int, T > p = *s.begin();
			s.erase(s.begin());

			T currentNode = p.second;

			int currentNodeDist = p.first;

			for (auto nbr : I[currentNode]) {
				T nbrNode = nbr.first;
				int distInBetween = nbr.second;
				int nbrNodeDist = dist[nbrNode];

				if (currentNodeDist + distInBetween < nbrNodeDist) {
					auto pr = s.find({dist[nbrNode], nbrNode });

					if (pr != s.end()) {
						s.erase(pr);
					}
					dist[nbrNode] = currentNodeDist + distInBetween;
					s.insert({ dist[nbrNode], nbrNode });
				}
			}
		}

		for (auto x : dist) {
			cout << x.first << " is at distance " << x.second << " from source " << endl;
		}
	}
};

