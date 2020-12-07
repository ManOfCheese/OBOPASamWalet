#include <iostream>
#include "Parent.h"

Parent copyParent( Parent p ) {
    Parent parent = Parent( p );
    return p;
}

int main() {
    std::shared_ptr<Parent> p1 = std::make_shared<Parent>( "Parent1" );
    std::cout << "p1:" << *p1 << std::endl;

    std::shared_ptr<Parent> p1Copy = p1;
    std::shared_ptr<Parent> p1Copy2 = p1;

    std::cout << "Reference Count: " << p1.use_count() << std::endl;

    std::shared_ptr<Parent> p2 = std::make_shared<Parent>( *p1 ); // roept de copy constructor aan
    std::cout << "p2:" << *p2 << std::endl;

    std::shared_ptr<Parent> p3 = std::make_shared<Parent>( "Parent2" );
    std::cout << "p3:" << *p3 << std::endl;

    *p3 = *p1; // roept de assignment operator aan
    std::cout << "p1:" << *p3 << std::endl;

    p1->FetusDeletus();
    std::cout << "p1 Child Count: " << p1->CountChildren() << std::endl;
    std::cout << "p2 Child Count: " << p2->CountChildren() << std::endl;
    std::cout << "p3 Child Count: " << p3->CountChildren() << std::endl;

    Parent parent = copyParent( *p3 );

    return 0;
}
