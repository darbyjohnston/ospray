OSPRay Gallery
==============

This page contains a few sample screenshots of different renderings done
with OSPRay. If *you* have created any notable images through OSPRay
and would like to share them on this page, please [send us an
email](mailto:ospray@googlegroups.com).

<div class="exhibit">
[![Cosmos Video](gallery/cosmos_video.png)](https://vimeo.com/237987637 "Cosmos Video")
 <div class="caption">
<h2>AMR Binary Black Hole Merger</h2>
<p>Simulation of two black holes colliding using GRChombo in reference to a LIGO event.  Simulation was conducted by
[the Centre for Theoretical Cosmology (CTC)](http://www.ctc.cam.ac.uk/).  Images were 
rendered in ParaView by directly sampling the AMR structure using OSPRay.</p>
</div>
</div>

<div class="exhibit">
[![NASA Parachute Video](gallery/nasa_parachute_video.png)](https://vimeo.com/237987416 "NASA Parachute Video")
<div class="caption">
<h2>NASA Ames Parachute Simulation</h2>
<p>Video rendered using OSPRay by Tim Sandstrom of NASA Ames.</p>
</div>
</div>

Screenshots and Video of the 10TB Walls Data set
------------------------------------------------

<div class="left">
[![](gallery/walls_4k_00-thumb.jpg)](gallery/walls_4k_00.png)
[![](gallery/walls_4k_01-thumb.jpg)](gallery/walls_4k_01.png)
[![](gallery/walls_4k_05-thumb.jpg)](gallery/walls_4k_05.png)
[![](gallery/walls_4k_11-thumb.jpg)](gallery/walls_4k_11.png)
[![](gallery/walls_4k_21-thumb.jpg)](gallery/walls_4k_21.png)
</div>

Some of the forty time steps of the `walls` data set, which is a
simulation of the formation of domain walls in the early universe by
[the Centre for Theoretical Cosmology (CTC)](http://www.ctc.cam.ac.uk/)
in cooperation with [SGI](http://www.sgi.com/). Each volume has a
resolution of 4096^3^, thus the total data set is *10TB* large. With
OSPRay running on a SGI UV300 system you can interactively explore the
data -- watch the [movie](gallery/walls_4k.mp4). For more background
read the related [blog post by
SGI](http://blog.sgi.com/accelerating-scientific-discovery-through-visualization/).

OSPRay's Path Tracer
----------------------------------------

<div class="left">
[![](gallery/pt-Wohnung1-thumb.jpg)](gallery/pt-Wohnung1.png)
[![](gallery/pt-Wohnung2-thumb.jpg)](gallery/pt-Wohnung2.png)
[![](gallery/pt-LoftOffice-thumb.jpg)](gallery/pt-LoftOffice.png)
[![](gallery/pt-SedusPanorama-thumb.jpg)](gallery/pt-SedusPanorama.png)
[![](gallery/pt-ActiuRender-thumb.jpg)](gallery/pt-ActiuRender.png)
</div>

The first five example scenes were modeled with
[EasternGraphics](http://www.easterngraphics.com/en.html)' room planning
and interior design software
[pcon.Planner](http://pcon-planner.com/en/), exported to `obj` and
rendered using OSPRay. The scenes contain between one million and ten
million triangles.\

[![](gallery/pt-car-thumb.jpg)](gallery/pt-car.png)

This car model consists of 5.7 million triangles and features some of
the more advanced materials of OSPRay's path tracer.


OSPRay Parallel Rendering on TACC's "Stallion" Display Wall
-----------------------------------------------------------

[![](gallery/ospray_stallion-thumb.jpg)](displaywall.html)

This shows a photo of OSPRay parallel rendering on TACC's 320 MPixel
"Stallion" Display wall.

[Read more.](displaywall.html)


VMD/Tachyon Screenshots
-----------------------

This section shows some screenshots from the Tachyon module applied to
models exported from the widely used "Visual Molecular Dynamics" (VMD)
tool. In that workflow, a VMD user uses the VMD command
`export Tachyon mymodel.tachy` to export the VMD model in tachyon
format, then uses the `ospTachyon mymodel.tachy` viewer on those models.

[![](gallery/ospTachyon-glpf-thumb.jpg)](gallery/ospTachyon-glpf.png)

VMD "GLPF" model; original model courtesy John Stone, UIUC.\

[![](gallery/ospTachyon-organelle-thumb.jpg)](gallery/ospTachyon-organelle.png)

VMD "Organelle", using vdW-representation via ospray spheres. Model
courtesy Carsten Kutzner, MPI BPC, Göttingen.\

[![](gallery/ospTachyon-ribosome-thumb.jpg)](gallery/ospTachyon-ribosome.png)

VMD "ribosome", with balls, sticks, ribbons, and quicksurfs. Model
courtesy Carsten Kutzner, MPI BPC, Göttingen.

Other
-----------------------

[![](gallery/obj-xfrog-thumb.jpg)](gallery/obj-xfrog.png)

The "xfrog" model of 1.7 billion (instanced) triangles and transparency
textures. Model originally created using XFrog, model courtesy Oliver
Deussen, University of Konstanz.\