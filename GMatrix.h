/* 
 * File:   GMatrix.h
 * Author: MinSung
 *
 * Created on July 29, 2015, 3:48 PM
 */

#ifndef GMATRIX_H
#define	GMATRIX_H
#include "IMatrix.h"
#include <vector>

class GMatrix : public IMatrix {
private:
    std::vector<std::vector<double> > itsValue;
public:

    int getColumnSize() {
        return itsValue.size();
    }

    int getRowSize() {
        if (this->itsValue.empty()) {
            return 0;
        } else {
            return this->itsValue.front().size();
        }
    }
    int getValue(){
        return this->itsValue;
    }
    int getValue(const int theRow,const int theColumn){
        return this->itsValue.at(theRow).at(theColumn);
    }
    //getrow, getcolum
    //set
};

#endif	/* GMATRIX_H */

