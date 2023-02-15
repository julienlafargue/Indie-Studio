/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Model3D
*/

#ifndef MODEL3D_HPP_
#define MODEL3D_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"
#include "../TwoDTexture.hpp"
#include "../../enum/gameEnum.hpp"
#include <string>

namespace indie
{
  class Model3D {
    public:
      /**
       * @brief Constructs a new Model3D object
       *
       * @param fileName Path to the file containing the Model
       * @param position Position of the Model
       * @param scale Scale of the Model
       * @param tint Tint of the Model
       */
      Model3D(std::string fileName, Vector3D position, float scale, Color tint, entityid::EntityID id);
      /**
       * @brief Constructs a new Model3D object
       *
       * @param mesh Mesh from which the model will be created
       * @param position Position of the Model
       * @param scale Scale of the Model
       * @param tint Tint of the Model
       */
      Model3D(std::string fileName, Vector3D position, Vector3D rotation, float scale, Color tint, entityid::EntityID id);
      /**
       * @brief Constructs a new Model3D object
       *
       * @param fileName Path to the file containing the Model
       * @param position Position of the Model
       * @param rotation Rotation of the Model
       * @param scale Scale of the Model
       * @param tint Tint of the Model
       */
      Model3D(Mesh mesh, Vector3D position, float scale, Color tint, entityid::EntityID id);
      /**
       * @brief Destroys the Model3D object
       */
      ~Model3D();
      /**
       * @brief Loads the model from a file
       *
       * @param fileName Path to the file containing the Model
       * @return Model
       */
      Model loadModel(std::string fileName);
      /**
       * @brief Loads the model from a Mesh
       *
       * @param mesh Mesh from which the model will be created
       * @return Model
       */
      Model loadModelFromMesh(Mesh mesh);
      /**
       * @brief Unload Model (From RAM and VRAM)
       */
      void unloadModel();
      /**
       * @brief Draws the Model
       */
      void drawModel();
      /**
       * @brief Draws the Bounding box
       *
       * @param box BoundingBox
       * @param color Color of the BoundingBox
       */
      void drawBoundingBox(BoundingBox box, Color color);
      /**
       * @brief Draws the Model and handle Rotation
       *
       * @param axis Axis which will be used to rotate the model
       * @param angle Angle of rotation
       */
      void drawModelEx(Vector3D axis, float angle);
      /**
       * @brief Set the Model object based on a model
       *
       * @param model Model
       */
      void setModel(Model model);
      /**
       * @brief Set the Model object based on a file
       *
       * @param fileName Filepath
       */
      void setModel(std::string fileName);
      /**
       * @brief Set the Model object based on a mesh
       *
       * @param mesh Mesh
       */
      void setModel(Mesh mesh);
      /**
       * @brief Set the Position object
       *
       * @param position Position
       */
      void setPosition(Vector3D position);
      /**
       * @brief Set the Position object
       *
       * @param rotation Rotation
       */
      void setRotation(Vector3D rotation);
      /**
       * @brief Set the Scale object
       *
       * @param scale Scale
       */
      void setScale(float scale);
      /**
       * @brief Set the Tint object
       *
       * @param tint Tint
       */
      void setTint(Color tint);
      void setType(entityid::EntityID id);

      /**
       * @brief Get the Model object
       *
       * @return Model
       */
      Model getModel() const;
      /**
       * @brief Get the Position object
       *
       * @return Vector3
       */
      Vector3D getPosition() const;
      /**
       * @brief Get the Scale object
       *
       * @return float
       */
      float getScale() const;
      /**
       * @brief Get the Tint object
       *
       * @return Color
       */
      BoundingBox getBoundingBox() const;
      Color getTint() const;
      entityid::EntityID getID() const;
      void setBoxSize(Vector3D posMin, Vector3D posMax);
      void setBoxPosition(Vector3D pos);
      void incrementBoxPosition(Vector3D pos);
      void incrementBoxPositionX(float x);
      void incrementBoxPositionY(float y);
      void incrementBoxPositionZ(float z);
      void applyTexture(TwoDTexture &texture);

    private:
      Model _model;
      Vector3D _position;
      Vector3D _rotation = Vector3D(0, 0, 0);
      float _scale;
      Color _tint;
      BoundingBox _box;
      entityid::EntityID _id;
      int _typemodel;
  };
}

#endif /* !MODEL3D_HPP_ */
