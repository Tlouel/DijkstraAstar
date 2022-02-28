#include "Algo.h"

int main() {
	Graph<string> g;

	g.Connect("Montpellier", "Creutzwald", 8);

	g.Connect("Montpellier", "Beziers", 1);

	g.Connect("Creutzwald", "Beziers", 8);

	g.Connect("Paris", "Beziers", 2);

	g.Connect("Marseille", "Berlin", 4);

	g.Connect("Paris", "Marseille", 6);

	g.Connect("Berlin", "Creutzwald", 2);

	g.Print();
	cout << endl;

	g.Dijkstra("Montpellier");
	cout << endl;
	g.Dijkstra("Creutzwald");
}
