#ifdef GL_ES
precision highp float;
#endif
    varying vec2 TexCoord;
    void main()
    {
        int i;
        float z = 1.0;
        for (i = 0; i<1000000000; i++) {
            z += 0.1; z *= 0.995;
        }
        gl_FragColor = vec4(1.0, TexCoord.s, TexCoord.t, z);
    }
