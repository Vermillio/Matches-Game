#ifndef MATCHES_GAME_H
#define MATCHES_GAME_H

#include <set>
using std::set;

class Game
{
	int N, K;

	set<int> res;

	set<int> countWin(int n, int k);

	public:
		void demo();
};

#endif