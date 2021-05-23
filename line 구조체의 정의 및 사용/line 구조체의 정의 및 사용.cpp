#include <stdio.h>
#include <string>
#include <math.h>

struct point {
	int x, y;
};

struct line {
	struct point start, end;
};

void pr_p(const struct point* ptr) {
	printf("(%d %d)", ptr->x, ptr->y);
}
double get_lenth(const struct line* ptr) {
	long int dx = ptr->end.x - ptr->start.x;
	long int dy = ptr->end.y - ptr->start.y;
	return sqrt(dx * dx + dy * dy);
}

int main() {
	struct line a {
		{10, 20}, { 30,40 }
	};
	printf("직선 정보:");
	pr_p(&a.start);
	pr_p(&a.end);

	printf("\n길이:%f\n", get_lenth(&a));

	

	
}

