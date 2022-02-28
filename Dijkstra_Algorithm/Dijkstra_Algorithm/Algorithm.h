//#pragma once
//
//#include <iostream>
//#include <stdio.h>
//#include <limits.h>
//
//using std::cout;
//using std::endl;
//
//
//#define MATRICE 20
//
//int MinDistance(int dist[], bool shortest[]) {
//	int min = INT_MAX;
//	int startPoint = 0;
//
//	for (int i = 0; i < MATRICE; i++) {
//		if (shortest[i] == false && dist[i] <= min) {
//
//			min = dist[i];
//			startPoint = i;
//		}
//	}
//	return startPoint;
//}
//
//void ConsoleOut(int dist[]) {
//
//	cout << "Matrice " << "Distance from 0 " << endl;
//
//	for (int j = 0; j < MATRICE; j++) {
//		printf("%d\t  %d\n", j, dist[j]);
//
//	}
//
//}
//
//void Dijsktra(int graph[MATRICE][MATRICE], int source) {
//	int dist[MATRICE];
//	bool shortest[MATRICE];
//
//	for (int i = 0; i < MATRICE; i++) {
//		dist[i] = INT_MAX;
//		shortest[i] = false;
//	}
//
//	dist[source] = 0;
//
//	for (int count = 0; count < MATRICE - 1; count++) {
//
//		int u = MinDistance(dist, shortest);
//		shortest[u] = true;
//
//		for (int m = 0; m < MATRICE; m++) {
//			if (!shortest[m] && graph[u][m] && dist[u] != INT_MAX && dist[u] + graph[u][m] < dist[m])
//				dist[m] = dist[u] + graph[u][m];
//		}
//	}
//
//	ConsoleOut(dist);
//	
//}
