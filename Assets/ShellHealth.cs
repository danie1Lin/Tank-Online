using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellHealth : EntityHealth {
    public ParticleSystem m_ExplosionParticles;
    private void OnDestroy()
    {
        var e = Instantiate(m_ExplosionParticles, transform.position, transform.rotation);

        e.gameObject.SetActive(true);

        // Play the particle system of the tank exploding.
        e.Play();

        // Play the tank explosion sound effect.
        e.Play();
        Destroy(e, e.duration);
    }

}
