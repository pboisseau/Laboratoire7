/**
 * \file Shpere.h
 * \brief 
 * \date 2019-03-02
 * \author: etudiant
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include <string>

class Sphere
{

public:

	Sphere(double p_rayon);

	const double& reqRayon() const;

	void asgRayon(const double& p_rayon);

	const double reqVolume() const;

	std::string reqVolumeFormate() const;


private:

	double m_rayon;
};

#endif /* SPHERE_H_ */
