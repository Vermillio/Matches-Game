//Here is a simple game. In this game, there are several piles of matches and two players. The two players play in turn. 
//In each turn, one can choose a pile and take away arbitrary number of matches from the pile 
//(Of course the number of matches, which is taken away, cannot be zero and cannot be larger than the number of matches 
//in the chosen pile). If after a player’s turn, there is no match left, the player is the winner. 
//Suppose that the two players are all very clear. 
//This program tells whether the player who plays first can win the game or not.


#include "matches_game.h"
#include <iostream>
#include <set>

using namespace std;

set<int> Game::countWin(int n, int k)
{
	set<int> ans;
	for (int i = 5; i <= 2 * n + 1; i *= 2) 
	{
		if (n % i - 1 && n % i - 1 <= k) 
			ans.insert(abs(n % i - 1));
	}
	return ans;
}

void Game::demo()
{
	cout << "<<MATCHES GAME>>" << endl;
	cout << "Enter N (total num of matches) : ";
	cin >> N;
	cout << "Enter K (first player is allowed to take) : ";
	cin >> K;
	res = countWin(N, K);
	for (auto i = res.begin(); i != res.end(); i++)
		cout << *i << " ";
	cout << endl;
}
