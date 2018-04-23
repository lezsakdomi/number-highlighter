#include <SFML/Graphics.hpp>
#include <cmath>
#include <stdio.h>

unsigned long long int f(unsigned long long int n_) {
	auto n = (double) n_/10;
	return (n*n);
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "oszlopfuggveny");
    window.setFramerateLimit(1);

    bool first = true;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
	const auto ws = window.getSize();
	const unsigned long long int s = (long long)ws.x*ws.y, cpi = s/100;
	unsigned long long n = 1, r, lcp = 1;
	time_t ltcp; time(&ltcp);
	while ((r=f(n++))<s) {
		sf::RectangleShape e(sf::Vector2f(1, 1));
		e.setPosition(r/ws.y, r%ws.y);
		window.draw(e);
		if (r/cpi > lcp) {
			if (first) {
				time_t ct; time(&ct);
				if (difftime(ct, ltcp)>1) {
					window.display();
					ltcp=ct;
				}
			}
			printf("%llu\033[K\r", s-r);
			lcp = r/cpi;
		}
	}
	printf("Done\tn=%llu\033[K\r", n);
        window.display();
	first = false;
    }

    return 0;
}

