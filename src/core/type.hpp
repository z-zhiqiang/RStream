/*
 * type.hpp
 *
 *  Created on: Mar 6, 2017
 *      Author: kai
 */

#ifndef CORE_TYPE_HPP_
#define CORE_TYPE_HPP_

#include "../common/RStreamCommon.hpp"

typedef int VertexId;
typedef float Weight;

struct Edge {
	VertexId src;
	VertexId target;
	Weight weight;

	Edge(VertexId _src, VertexId _target, Weight _weight) : src(_src), target(_target), weight(_weight) {}
	Edge() : src(0), target(0), weight(0.0f) {}
};

struct Vertex_Interval {
	VertexId start;
	VertexId end;
};

inline std::ostream & operator<<(std::ostream & strm, const Edge& edge){
	strm << "(" << edge.src << ", " << edge.target << ", " << edge.weight << ")";
	return strm;
}


struct BaseUpdate {
	VertexId target;

	std::string toString(){
		return std::to_string(target);
	}

};

struct BaseVertex {
	VertexId id;
};

struct Update_Stream {
	std::string update_filename;
};

inline std::ostream & operator<<(std::ostream & strm, const BaseUpdate& up){
	strm << "(" << up.target << ")";
	return strm;
}


#endif /* CORE_TYPE_HPP_ */
