#ifndef Adh�rant_h
#define Adh�rant_h

#include <vector>


class Biblioth�que;

class Adh�rant {

 public:

    virtual void Emprunter();

    virtual void Rendre();

 public:
    String Pr�nom;
    String Nom;

 public:

    /**
     * @element-type Biblioth�que
     */
    std::vector< Biblioth�que* > myBiblioth�que;
};

#endif // Adh�rant_h
