#pragma once

#include <vector>

#include "lib/glm.hpp"

#include "gl/glbase.hpp"

namespace huigl {
class Mesh {

private:
  std::shared_ptr<VBO> vbo;
  std::shared_ptr<EBO> ebo;
  std::vector<glm::vec3> vertices;
  std::vector<unsigned int> indices;

public:
  static std::shared_ptr<Mesh> fromFile(const char *p);

  Mesh(std::vector<glm::vec3> vertices, std::vector<unsigned int> indices)
      : vertices(vertices), indices(indices) {}
  //   std::vector<glm::vec3> normals;
  std::vector<float> toBuffer() const;
  std::shared_ptr<VBO> getVBO();
  std::shared_ptr<EBO> getEBO();
};
} // namespace huigl