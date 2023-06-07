import { AppContext } from "./context";

export const useApp = (): App | undefined => {
	return React.useContext(AppContext);
};
