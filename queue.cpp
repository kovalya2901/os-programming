#include <iostream>
using namespace std;
class Queue
{
public:
	int queue[5] = {1, 2, 3, 4, 5};
	void remove() {
		if (queue[first] != NULL) {
			for (int i = 0; i < 4; i++)
			{
				queue[i] = queue[i + 1];
			}
			queue[last] = NULL;
		}
		else
		{
			cout << "Очередь пуста, невозможно убрать элемент";
		}

	};

	void print() {
		for (int i = 0; i < 5; i++)
		{
			cout << queue[i] << " ";
		}
		cout << endl;
	};

	void add() {
		if (queue[last] == NULL) {
			cin >> queue[last];
		}
		else
		{
			cout << "Очередь заполнена, невозможно добвить элемент";
		}
	}

private:
	int queueSize = 5;
	int first = 0;
	int last = size(queue)-1;
};

int main(void)
{
	setlocale(LC_ALL, "rus");
	Queue queue;
	queue.print();
	queue.remove();
	queue.print();
	queue.add();
	queue.print();
}
