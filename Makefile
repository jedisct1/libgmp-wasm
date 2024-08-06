all: precompiled/lib/libgmp.a

precompiled/lib/libgmp.a:
	INSTALL_DIR="$$(pwd)/precompiled"; cd gmp-*; \
	env AR="zig ar" RANLIB="zig ranlib" \
	CC="zig cc -target wasm32-wasi" \
	CFLAGS="-Os -flto" \
	./configure --prefix="$$INSTALL_DIR" \
	--disable-shared --enable-static --disable-assembly \
	--host=wasm32-unknown-wasi && \
	make -j"$$(nproc)" install

clean:
	rm -rf precompiled
	cd gmp-*; make distclean
