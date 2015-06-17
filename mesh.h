#pragma once

#include "vertex.h"
#include <vector>

/************************************************************
 * Class de triangle de base
 ************************************************************/
class Triangle {
	public:
		inline Triangle () {
			v[0] = v[1] = v[2] = 0;
		}
		inline Triangle (const Triangle & t) {
			v[0] = t.v[0];
			v[1] = t.v[1];
			v[2] = t.v[2];
		}
		inline Triangle (unsigned int v0, unsigned int v1, unsigned int v2) {
			v[0] = v0;
			v[1] = v1;
			v[2] = v2;
		}
		inline virtual ~Triangle () {}
		inline Triangle & operator= (const Triangle & t) {
			v[0] = t.v[0];
			v[1] = t.v[1];
			v[2] = t.v[2];
			return (*this);
		}
		
		unsigned int v[3];
};

/************************************************************
 * Class de maillage basique
 ************************************************************/
class Mesh {
	public:
		Mesh();
		inline Mesh (const std::vector<Vertex> & v) : vertices (v)  {}
		std::vector<Vertex> vertices;

		bool loadMesh(const char * filename);
		void drawSmooth();

};

