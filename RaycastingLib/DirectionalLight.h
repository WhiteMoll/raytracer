#pragma once
#include "Light.h"

namespace RT
{
	class DirectionalLight : public Light
	{
	public:
		DirectionalLight(float intensity, Vec3 direction);
		~DirectionalLight();

		/** Renvoie l'att�nuation de la lumi�re en fonction de la position du point � �clairer.
		*/
		float GetAttenuation(Vec3 point, Vec3 normale);

		/** La lumi�re est toujours � une distance de 1 du point �clair�
		*/
		virtual Vec3 GetPosition(Vec3 point, Vec3 normale);
		Vec3 direction;
	};


}
