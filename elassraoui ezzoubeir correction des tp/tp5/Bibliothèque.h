#ifndef Biblioth�que_h
#define Biblioth�que_h

class Adh�rant;
class Document;

class Biblioth�que {

 public:

    virtual void AjouterDoc();

    virtual void AjouterAdh();

    virtual void SupprimerAdh();

 public:

    Adh�rant *myAdh�rant;

    /**
     * @element-type Document
     */
    Document *myDocument;
};

#endif // Biblioth�que_h
