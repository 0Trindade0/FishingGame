#include <iostream>
#include "Random.h"
#include "Fish.h"
#include "Lake.h"

int main()
{
	Random::Init();

	Lake lake(10, 5);

	std::vector<Fish> fishes = generateFish();

	//Put the fishs in the lake
	for (const Fish& f : fishes)
	{
		int x = f.getX();
		int y = f.getY();

		if (!lake.isOccupied(x, y)) {lake.occupyPosition(x,y);}
	}

	int attempts = 0;
	int maxAttempts = 10;
	int found = 0;
	
	std::cout << "\nWelcome to the Fishing Game!\nThe fishs are hidden across the lake, try to fish the most of them before you're run out of attempts\n";
	
	while (attempts < maxAttempts)
	{
		lake.printLake();

		int x, y; 
		std::cout << "\Attempt " << (attempts + 1) << "/" << maxAttempts << "\n";
		std::cout << "Type the coordinate X (1 to 10): ";
		std::cin >> x;
		std::cout << "Type the coordinate (1 to 5): ";
		std::cin >> y;

		// Adjust the index (User type 1 to N)
		x--; y--;

		if (x < 0 || x >= lake.getWidth() || y < 0 || y >= lake.getHeight()) {
			std::cout << "Invalid coordinate! Try again.\n";
			continue;
		}
		
		if (lake.wasTried(x, y)) {
			std::cout << "You already tried this position!\n";
			continue;
		}

		lake.tryPosition(x, y);
		attempts++;
		
		if (lake.isOccupied(x, y)) {
			std::cout << "You caught a fish!\n";
			found++;
		}
		else {
			std::cout << "Nothing here...\n";
		}

		std::cout << "\End of the fishing! You founded" << found << " fish(s)!\n";
		lake.printLake();
	}
}


