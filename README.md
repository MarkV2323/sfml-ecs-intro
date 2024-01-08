# SFML-ECS-INTRO

A project based around learning the basic of the ECS (Entity, Component, System) design doctrine.

### Build & Run Command

*Built and run on Powershell*

```cmake --build .\build\ ; .\build\Debug\sfml-ecs-intro.exe```

### Tile Entity

A tile entity is a simple entity. It essentially is the background environment. For the time
being, a tile must contain both a position and bounding box component.

### Position Component

A position component contains two unsigned int, X and Y to denote top left position of an object.

### Bounding Box Component

A bounding box component contains two lengths, a width and height of an object; and a boolean
determining whether it can be collided with.
