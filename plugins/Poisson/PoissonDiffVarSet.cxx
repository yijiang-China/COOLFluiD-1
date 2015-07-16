#include "Framework/PhysicalChemicalLibrary.hh"
#include "Poisson/PoissonDiffTerm.hh"
#include "Poisson/PoissonDiffVarSet.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace Physics {

    namespace Poisson {

//////////////////////////////////////////////////////////////////////////////


PoissonDiffVarSet::PoissonDiffVarSet(const std::string& name,
 Common::SafePtr<Framework::PhysicalModelImpl> model) :
  DiffusiveVarSet(name, model),
  m_library(CFNULL)
{
}
      
//////////////////////////////////////////////////////////////////////////////

PoissonDiffVarSet::~PoissonDiffVarSet()
{
}

//////////////////////////////////////////////////////////////////////////////

void PoissonDiffVarSet::setup()
{

  using namespace COOLFluiD::Framework;
  
  m_library = PhysicalModelStack::getActive()->getImplementor()->
    getPhysicalPropertyLibrary<PhysicalChemicalLibrary>();  
}

//////////////////////////////////////////////////////////////////////////////

RealVector& PoissonDiffVarSet::getFlux
(const RealVector& values,
 const std::vector<RealVector*>& gradients,
 const RealVector& normal,
 const CFreal& radius)
{
  using namespace std;
  using namespace COOLFluiD::Framework;
	
  //@TODO: We need to figure out how to have veriable sigma
  // AL: not generic this assumes [p v T] variables !!!
  //CFreal Tdim = values[this->_TID];
  //cf_assert(Tdim > 0.01);
  //cf_assert(this->_TID > 0);
  //CFreal pdim = _eulerModelLTE->getPressureFromState(values[0]);
  //cf_assert(pdim > 0.01);
  /* Access the mutation library to get sigma*/
  //CFreal* tVec = CFNULL;
  //const CFreal sigma = m_library->sigma(Tdim, pdim, tVec);

  const CFreal sigma = 1; //To be changed
  const CFuint phiID = 0;
  const RealVector& gradPhi = *gradients[phiID];
  const CFuint dim    = PhysicalModelStack::getActive()->getDim();
    
  _flux[phiID] = 0.0;
  // AL: double check the sign
  for (CFuint i = 0; i < dim ; ++i) {
    _flux[phiID] += sigma*gradPhi[i]*normal[i];
  }
  
  return _flux;
}

//////////////////////////////////////////////////////////////////////////////

CFreal PoissonDiffVarSet::getCurrUpdateDiffCoeff(CFuint iEqSS)
{
// @TODO: Ask Andrea, is it really 0?
  return 0.0;
}

//////////////////////////////////////////////////////////////////////////////

    } // namespace Poisson

  } // namespace Physics

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////