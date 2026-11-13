/* a 3x3 rotation passed by value (rows of 3 floats): out = v0 * x + v1 * y + v2 * z */
typedef struct CollRot {
    Vec3 v0;
    Vec3 v1;
    Vec3 v2;
} CollRot;
