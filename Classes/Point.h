#include <cstdlib>
#include <ctime>

// will require srand() to work
class Point {
    public:
        Point();
        void init(int width, int height);
        int getX();
        int getY();
        int getLabel();

    private:
        int x;
        int y;
        int label;
};