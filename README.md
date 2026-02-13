# Rusted Real Engine

## Lightweight Open-Source RTS-Focused Game Engine (C++)

Rusted Real Engine is a lightweight, open-source 3D game engine written in modern C++, designed primarily for real-time strategy (RTS) games.

It aims to provide a minimal, scalable, and performance-oriented alternative to large game engines such as Unreal Engine and Unity.

The engine focuses on:

-  #### Simplicity
  
-  #### Performance
  
-  #### Scalability (hundreds/thousands of units)
  
-  #### Clean architecture
  
-  #### Full control over low-level systems

# 🏗 Core Architecture

##### Modern C++

  - ECS (Entity Component System)
  
  - Data-oriented memory layout
  
  - Multi-thread ready
  
  - Deterministic simulation (RTS friendly)
  
  - Modular subsystems

*🧱 Engine Modules :*
🔹 Core
  
  - Engine loop
  
  - Time management
  
  - Input system
  
  - Window management

🔹 Rendering
  
  - OpenGL renderer
  
  - Instanced rendering
  
  - Frustum culling
  
  - LOD system
  
  - Terrain rendering

🔹 ECS
  
  - Entity registry
  
  - Component storage
  
  - Systems architecture

🔹 Simulation

  - Movement system
  
  - Combat system
  
  - AI systems
  
  - Pathfinding (A*, Flow Field)

🔹 Tools
  
  - Debug overlay
  
  - Profiling hooks
  
  - Editor integration (planned)

🎯 Engine Roadmap

  - Core Engine Foundation
  
  - ECS & Architecture
  
  - RTS Core Systems (movement, pathfinding, selection)
  
  - World & Optimization (terrain, culling, LOD)
  
  - AI & Simulation (combat, behavior tree, state machine)
  
  - Technical Demo (showcasing engine features and scalability)

📦 Tech Stack

  - C++20
  
  - OpenGL
  
  - GLFW
  
  - GLM
  
  - Dear ImGui
  
  - CMake

🤝 Contributing

-  Contributions are welcome!
  Focus areas:
  
-  ECS optimization
  
-  Pathfinding systems
  
-  Multithreading
  
-  Rendering improvements
  
-  Tools & editor features

📜 License

MIT License — Open Source

🎮 Rusted Reality
RTS Game Built on Rusted Real Engine

Rusted Reality is the first game built using Rusted Real Engine, designed to validate and showcase the engine’s capabilities in large-scale RTS scenarios.

🌍 Game Vision

-  Large-scale battles with hundreds of units
  
-  Tactical and strategic gameplay
  
-  Deterministic simulation for multiplayer
  
-  Scalable AI & pathfinding
  
-  Expandable content (factions, maps, campaigns)

🧠 Design Philosophy

-  Engine drives gameplay possibilities
  
-  Systems before content
  
-  Scalability and performance first
  
-  Simulation integrity over visual effects

#🎯 Rusted Reality Roadmap

Stage 1 — Prototype & Core Mechanics

-  Unit spawning & movement

-  Camera & RTS controls

-  Basic selection system

-  Grid-based pathfinding

-  Combat prototype

Stage 2 — Gameplay Layer

-  Factions & units

-  Buildings & resources

-  Economy & tech tree

AI behaviors for multiple factions

-  Stage 3 — Content & Maps
  
-  Terrain & heightmaps
  
-  Environment props & obstacles
  
-  Multiple maps / scenarios
  
-  Stage 4 — Multiplayer Integration
  
-  Deterministic lockstep simulation
  
-  Networked unit synchronization
  
-  Lobby & matchmaking systems
  
-  Stage 5 — Polish & Expansion

UI / HUD / minimap

-  Animations & VFX
  
-  Campaign / missions
  
-  Balancing & testing
  
```
  /RustedRealEngine   → Engine source code
  /RustedReality      → Game implementation
  /docs               → Documentation
  /assets             → Shared assets
```
🏁 Philosophy

Build a lightweight, open-source RTS engine with a clear architecture, then create a scalable game that fully leverages its capabilities.
