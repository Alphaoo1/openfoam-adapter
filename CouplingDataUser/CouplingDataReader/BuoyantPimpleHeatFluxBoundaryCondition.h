#ifndef BUOYANTPIMPLEHEATFLUXBOUNDARYCONDITION_H
#define BUOYANTPIMPLEHEATFLUXBOUNDARYCONDITION_H

#include "fvCFD.H"
#include "basicThermo.H"
#include "turbulentFluidThermoModel.H"
#include "CouplingDataReader.h"
#include "fixedGradientFvPatchFields.H"

namespace preciceAdapter
{

class BuoyantPimpleHeatFluxBoundaryCondition : public CouplingDataReader
{

protected:

	Foam::volScalarField * _T;
	Foam::basicThermo * _thermo;
	Foam::compressible::turbulenceModel * _turbulence;

public:

	BuoyantPimpleHeatFluxBoundaryCondition( Foam::volScalarField * T,
											Foam::basicThermo * thermo,
											Foam::compressible::turbulenceModel * turbulence );

	void read( double * dataBuffer );

};

}


#endif // BUOYANTPIMPLEHEATFLUXBOUNDARYCONDITION_H
