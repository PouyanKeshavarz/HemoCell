/*
This file is part of the HemoCell library

HemoCell is developed and maintained by the Computational Science Lab 
in the University of Amsterdam. Any questions or remarks regarding this library 
can be sent to: info@hemocell.eu

When using the HemoCell library in scientific work please cite the
corresponding paper: https://doi.org/10.3389/fphys.2017.00563

The HemoCell library is free software: you can redistribute it and/or
modify it under the terms of the GNU Affero General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

The library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "meshGeneratingFunctions.h"

TriangularSurfaceMesh<T> * constructStringMeshFromConfig(Config & cfg) {
  vector<plb::Array<T,3>> * vertexList = new vector<plb::Array<T,3>>();
  vector<plint> * emanatingEdgesList = new vector<plint>();
  vector<Edge> * edgeList = new vector<Edge>();
  TriangularSurfaceMesh<T> * mesh = new TriangularSurfaceMesh<T>(*vertexList,*emanatingEdgesList,*edgeList);
  return mesh;
}
