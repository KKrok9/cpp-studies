#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H


class Node {
    friend void pointsDistance(Node&, Node&); // deklaracja przyjaźni
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

};

double pointsDistance(Node a, Node b);




#endif //JIPP2_NODE_H