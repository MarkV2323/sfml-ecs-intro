#include "Position.h"

namespace ecs {

Position::Position() : x(0), y(0) {};
Position::Position(unsigned x1, unsigned y1) : x(x1), y(y1) {};
Position::~Position() {};

}