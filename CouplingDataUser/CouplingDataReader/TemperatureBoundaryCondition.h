#ifndef TEMPERATUREBOUNDARYCONDITION_H
#define TEMPERATUREBOUNDARYCONDITION_H

#include "CouplingDataReader.h"
#include "fvCFD.H"

namespace preciceAdapter
{

class TemperatureBoundaryCondition : public CouplingDataReader
{

protected:

	Foam::volScalarField * _T;

public:

	TemperatureBoundaryCondition( Foam::volScalarField * T );
	void read( double * dataBuffer );

};

}

#endif // TEMPERATUREBOUNDARYCONDITION_H
