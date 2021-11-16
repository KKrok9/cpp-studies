#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H


class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);
    friend double pointsDistance(Node&, Node&); // deklaracja przyjaźni


};

double pointsDistance(Node&, Node&);




#endif //JIPP2_NODE_H