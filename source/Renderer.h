#ifndef HIPPO3D_RENDERER_H
#define HIPPO3D_RENDERER_H


//forward declarations
namespace Hippo3D {
	class Scene;
	class ToolKit;
	class Window;
}


namespace Hippo3D {

	class Renderer final {

	public:
		Renderer(ToolKit& tool_kit, Window& window, Scene& scene);

		void Render() const;

	private:
		ToolKit* tool_kit_;
		Window* window_;
		Scene* scene_;

	};

}


#endif //HIPPO3D_RENDERER_H
