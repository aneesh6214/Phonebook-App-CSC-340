#include "Node.h"

Node::Node(User *data)
{
    this->user->setName(data->getName());
    this->user->setPhoneNumber(data->getPhoneNumber());
    this->next = NULL;

}

Node::Node(User *data, Node *nextUser)
{
    this->user->setName(data->getName());
    this->user->setPhoneNumber(data->getPhoneNumber());
    this->next = nextUser;
}