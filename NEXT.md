# Where things stand / what's next

Cleaned (STATUS: CLEAN): lights, pad, main, freeze, respawn, mesh, help, initonce, initsky,
initspace, mission, bloaders, partproc, skyproc, crt0.

Next small files: game/vuchain.cpp (29 tiny functions; PS2 VU1 packet chain, g_pPacket),
then idol/fUnk, idol/xUnk, idol/9Unk. Leave game/partupd.cpp for later (large).

Open questions / leads:
- ResetMissionState clears g_FrustumPlanes: the Ghidra name is probably wrong.
- __register_frame_info / __deregister_frame_info sit in game/mathfunc.cpp; they are libgcc.
- sys_time_get_system_time in crt0 is passed .text start/end: the import label is suspect.
- Other C enums used as 16-bit fields in Ghidra structs may break layouts like
  MobyInstance did (check sizes when a struct is used).
- Style: see STYLE.md (blank lines between steps, bodies on their own line, no short names).
