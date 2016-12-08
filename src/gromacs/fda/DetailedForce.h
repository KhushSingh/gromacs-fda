/*
 * DetailedForce.h
 *
 *  Created on: Dec 7, 2016
 *      Author: Bernd Doser, HITS gGmbH <bernd.doser@h-its.org>
 */

#ifndef SRC_GROMACS_FDA_DETAILEDFORCE_H_
#define SRC_GROMACS_FDA_DETAILEDFORCE_H_

#include <array>
#include "PureInteractionType.h"
#include "Vector.h"

namespace fda {

struct DetailedForce
{
  DetailedForce() : number{0} {}

  /// Vector force separated for each interaction type
  std::array<Vector, static_cast<int>(PureInteractionType::NUMBER)> force;

  /// Number of forces for each interaction type
  std::array<int, static_cast<int>(PureInteractionType::NUMBER)> number;
};

} // namespace fda

#endif /* SRC_GROMACS_FDA_DETAILEDFORCE_H_ */
