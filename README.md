# Computer Graphics Project

## Repository Link
GitHub Repository: https://github.com/Ethanogogo/computer-graphics-project

---

## Project Description

This repository contains the SDL implementation for the final composition image of our Computer Graphics project. The SDL program combines rendered Blender scenes and an OpenGL scene into a single framed composition.

---

## Team Members

| Name | Matriculation Number | Role |
|--------|--------------------|--------|
| Ezeani Onyinyechukwu | 24120111040 | OpenGL |
| Durojaiye Muhammad | 24120111030 | Second 3D Scene |
| Ethan Onimisi Ogogo | 24120111071 | GitHub Manager |
| Paul Ehigie | 24120111123 | Documentation |
| Ewomazino Omugbe | 24120111089 | First 3D Scene |
| Isaac Agbaku | 24120111006 | Rendering with SDL |

---

# Final Composition

The final composition combines three major scenes:

- Japanese Street Night
- The Architecture of Memory (Quiet Comforts)
- OpenGL Polygon Transformation Scene

---

# OpenGL Polygon Transformation Scene

## Description

A rotating 3D hexagonal prism created using OpenGL and SDL2, demonstrating polygon modeling, transformations, perspective projection, and rendering techniques.

### Tools Used

#### SDL2 (Simple DirectMedia Layer)

- Created the application window.
- Handled user input and system events.
- Managed the OpenGL rendering context.

#### OpenGL

- Rendered the 3D hexagonal prism.
- Applied transformations and depth testing.
- Managed object rotation and perspective projection.

#### C++

- Implemented application logic.
- Controlled rendering and animation loops.

#### GLU (OpenGL Utility Library)

- Provided perspective projection using `gluPerspective()`.

#### Development Environment

- Visual Studio Code
- Code::Blocks
- Visual Studio

#### Compiler

- GCC / MinGW

---

## Challenges Faced

### 1. SDL2 and OpenGL Setup

- Configuring libraries and linker settings.
- Handling platform-specific compilation requirements.

### 2. Understanding 3D Coordinates

- Correctly positioning prism vertices.
- Preventing shape distortion.

### 3. Rotation Implementation

- Achieving smooth multi-axis rotation.

### 4. Perspective and Camera Positioning

- Maintaining object visibility.
- Preventing clipping and scaling issues.

### 5. Depth Handling

- Resolving overlapping faces through depth testing.

### 6. Rendering Debugging

- Correcting vertex ordering and rendering logic errors.

---

## Solutions

- Studied SDL2 and OpenGL documentation.
- Built and tested simpler shapes before the final prism.
- Fine-tuned camera distance and rotation parameters.
- Enabled depth testing with `glEnable(GL_DEPTH_TEST)`.
- Performed continuous testing and debugging.

---

## Object Composition

### Top Face

- Hexagonal polygon
- Red color
- Forms the top surface

### Side Faces

- Six rectangular faces
- Purple/Magenta
- Blue
- Cyan
- Green
- Yellow

### Bottom Face

- Hexagonal base
- Green color
- Partially visible due to perspective

### Geometric Structure

The hexagonal prism contains:

- 2 Hexagonal Bases
- 6 Rectangular Side Faces
- 12 Vertices
- 18 Edges

### Visual Features

- Black background
- Flat shading
- Bright face colors
- Perspective projection
- Slightly tapered appearance

---

## Media Links

### OpenGL Image

https://drive.google.com/file/d/1jKGa9bD_80PRi2NwMRJzSbd9a5smr9xa/view?usp=drivesdk

### OpenGL Video

https://photos.app.goo.gl/Tjx8HyMKbxHCmdHP9

---

# Japanese Street Night

## Description

This work is a 3D Japanese street night scene designed using Blender. It portrays a quiet and atmospheric urban environment featuring a small street illuminated by building lights, signboards, and subtle ambient lighting.

The scene captures the serenity and charm of a typical Japanese street at night, creating a calm and peaceful mood.

The design demonstrates how architectural structures, lighting elements, and cultural aesthetics can combine to create a visually appealing and tranquil environment. Through the arrangement of buildings, signs, and light sources, the scene reflects the beauty of urban life while emphasizing simplicity, harmony, and cultural identity.

### Blender File

https://github.com/Ethanogogo/computer-graphics-project/tree/main

---

# The Architecture of Memory (Quiet Comforts)

## Description

This scene explores nostalgia and the invisible stories left behind in everyday spaces. Every object within the environment tells a story about who we are when no one is watching.

The composition captures a frozen moment of stillness, emphasizing intimacy, comfort, and the beauty found in ordinary solitary routines.

### Blender File

https://github.com/Ethanogogo/computer-graphics-project/commit/982e4866e337f5b631fffa28c3e22aae38fa7a84

---

## Conclusion

This Computer Graphics project demonstrates the integration of Blender-rendered environments, OpenGL modeling, and SDL rendering techniques into a unified final composition. Through collaborative development, the project showcases 3D modeling, rendering, transformation techniques, lighting, environmental storytelling, and graphical programming concepts.
